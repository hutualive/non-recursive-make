# AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS], [TAR-NAME], [URL])
AC_INIT([hello], [0.0.1], [bug@xxx.com], [hello], [xxx.com])

# Force autoconf to be at least this version number.
AC_PREREQ([2.69])

# Put autotools auxiliary files in a subdir, so they don't clutter top dir.
# un-comment it when you really need it.
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

# additional macros put into xxx.m4
# start with AX_xxx, for example AX_C_LONG_LONG

# Enable "automake" to simplify creating makefiles. foreign relaxes some GNU
# checks. -Wall and -Werror are instructions to Automake, not GCC.
AM_INIT_AUTOMAKE([subdir-objects foreign -Wall -Werror])

# These are the files to be generated.
AC_CONFIG_FILES([Makefile])

# Safety check - list a source file that wouldn't be in other directories.
AC_CONFIG_SRCDIR([src/main.c])

# Put configuration results in this file for us to #include in our program.
AC_CONFIG_HEADERS([config.h])

# create definition in config.h
# AC_DEFINE(variable, value, description)

# Check for a C compiler.
AC_PROG_CC

# Check for headers.
# AC_CHECK_HEADERS([header-file...], [action-if-found], [action-if-not-found], [includes])
# HAVE_<HEADER>_H define in config.h

# Check for functions.
# AC_CHECK_FUNCS([function...], [action-if-found], [action-if-not-found])
# HAVE_<FUNCTION>_H define in config.h

# Check for libraries.
# PKG_CHECK_MODULES(prefix, list-of-modules, action-if-found, action-if-not-found)
# prefix will be used to create prefix_CPPFLAGS/prefix_LIBS and used by Makefile.am

# Use external package : --with-<package>=<arg>.
# AC_ARG_WITH(package, help-string, [action-if-given], [action-if-not-given])

# Enable additional package feature : --enable-<feature>.
# AC_ARG_ENABLE(package, help-string, [action-if-given], [action-if-not-given])
# AC_ARG_ENABLE([debug],
#        [AS_HELP_STRING([--enable-debug], [Enable debug])],
#        [], [enable_debug=yes])

# support conditional in Makefile.am
# AM_CONDITIONAL([DEBUG], [test "${debug}" = "true"])
# then in Makefile.am if DEBUG ... else ... endif
# if DEBUG bin_PROGRAMS += baz endif
# if test "${debug}" = "yes" ; then
#   AC_DEFINE([DEBUG], [1], [debug enabled])
# fi

# enable libtool for portable library
# LT_PREREQ([])
# LT_INIT

# Last line: actually generate all required output files.
AC_OUTPUT
