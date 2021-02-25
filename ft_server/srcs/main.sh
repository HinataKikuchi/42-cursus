#!/bin/sh

service nginx start
service mysql start
service php7.3-fpm start
chown www-data.www-data /var/www/html/ -R
tail -f /dev/null

