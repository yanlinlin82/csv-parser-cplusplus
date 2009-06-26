## Process this file with automake to produce Makefile.in

SUBDIRS = include .

DIST_SUBDIRS = include .

INCLUDES = -I$(top_builddir)/include -I@srcdir@/include

bin_SCRIPTS=csv_parser-config

lib_LTLIBRARIES = libcsv_parser.la

libcsv_parser_la_SOURCES = csv_parser.cpp
