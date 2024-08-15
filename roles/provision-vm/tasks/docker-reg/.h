
#!/bin/sh

db=$(kubectl get pods -l app=demo-mysqldb -o jsonpath="{.items[0].metadata.name}" -n demo-webapp)
kubectl exec -i ${db} --namespace demo-webapp -- mysql -u'root' -p'dummy' -e 'use dummy;''create table demo_table(id int not null auto_increment primary key, name varchar(50) not null, score int)';
