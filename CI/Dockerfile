FROM php:7.2-fpm
RUN docker-php-ext-install mysqli
RUN mkdir  /var/www/myapp
COPY ./CI/*.php ./CI/*.html   /var/www/myapp/
