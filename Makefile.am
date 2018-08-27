# global automake variables, apply to current Makefile.am
# AM_CPPFLAGS - default pre-processor flags
# AM_CFLAGS - default compiler flags
# AM_LDFLAGS - default linker flags
# LDADD - libraries not detected by configure that we should link with

# top_srcdir - relative path to the top of source tree
# srcdir - relative path to current Makefile

# put 3rd party macros in m4 directory
ACLOCAL_AMFLAGS = -I m4

# slimmer build output
# AM_SILENT_RULES([yes])

bin_PROGRAMS = hello
hello_SOURCES = src/hello.h src/hello.c src/main.c

# install public header
# include_HEADERS = lib/xxx.h
