FROM alpine
ADD hello.c /

RUN apk add vim
RUN apk add gcc
