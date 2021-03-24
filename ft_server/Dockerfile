##IMAGE##
#image from linux destribution debian.
FROM debian:buster

##APPLICATIONS##
#get applications by the commands billow
#APPS  :openssl, wget, php(7.3)-fpm, nginx, vim, php-mysql, mariadb-server
RUN set -ex;\
	apt-get update && apt-get install -y --no-install-recommends \
	openssl wget php-fpm nginx mariadb-server vim php-mysql php-mbstring

##WORDPRESS##
RUN mkdir -p /var/www/html/wordpress
RUN wget --no-check-certificate https://wordpress.org/latest.tar.gz
RUN tar -zxvf latest.tar.gz -C /var/www/html/

##PHPMYADMIN##
ENV PHPMYADMIN_VERSION 5.0.4
RUN wget --no-check-certificate https://files.phpmyadmin.net/phpMyAdmin/${PHPMYADMIN_VERSION}/phpMyAdmin-${PHPMYADMIN_VERSION}-all-languages.tar.gz
RUN tar -zxvf phpMyAdmin-${PHPMYADMIN_VERSION}-all-languages.tar.gz -C /var/www/html
RUN mv /var/www/html/phpMyAdmin-${PHPMYADMIN_VERSION}-all-languages /var/www/html/phpmyadmin


##CREATE SERTIFICATION##
RUN mkdir /etc/nginx/certificate; \
    openssl req -newkey rsa:406 -x509 -nodes -days 365\
    -subj "/C=JP/ST=Tokyo/L=Minatoku/O=42tokyo/OU=student/CN=localhost"\
    -keyout /etc/nginx/certificate/server.key\
    -out /etc/nginx/certificate/server.crt;
 
##ENTRYKIT##
ENV ENTRYKIT_VERSION 0.4.0
RUN wget --no-check-certificate https://github.com/progrium/entrykit/releases/download/v${ENTRYKIT_VERSION}/entrykit_${ENTRYKIT_VERSION}_Linux_x86_64.tgz \
    && tar -xvzf entrykit_${ENTRYKIT_VERSION}_Linux_x86_64.tgz -C /bin/ \
    && chmod +x /bin/entrykit \
    && entrykit --symlink \
    && rm entrykit_${ENTRYKIT_VERSION}_Linux_x86_64.tgz

EXPOSE 8080


#to run the docker even it was quitted
#RUN tail -f /dev/null
#copy the directory to the docker image

#copy directory carentry to container
COPY srcs srcs
#mv default.tmpl to /etc/nginx/sites-available
COPY ./srcs/default.tmpl /etc/nginx/sites-available/default.tmpl
#rm symboliclink's file
RUN rm /etc/nginx/sites-enabled/default
RUN mv ./srcs/config.inc.php /var/www/html/phpmyadmin
#make symbolicklink to sites-enable
#RUN ln -s /etc/nginx/sites-available/default.tmpl /etc/nginx/sites-enabled/default.tmpl


##QREATE SQL_DATA_BASE##
#PASSWORD = P@ssw0rd
#USER NAME = wpuser
#DATA BASE NAME = wp_db
RUN service mysql start && \
mysql -e "create database wp_db;" && \
mysql -e "create user 'wpuser'@'localhost' identified by 'P@ssw0rd';" && \
mysql -e "grant all on wp_db.* to 'wpuser'@'localhost';" && \
mysql -e "FLUSH PRIVILEGES;"
ENTRYPOINT ["render", "/etc/nginx/sites-available/default", "--", "bash", "./srcs/main.sh"]
RUN ln -s /etc/nginx/sites-available/default /etc/nginx/sites-enabled/default.tmpl
#CMD bash srcs/main.sh
