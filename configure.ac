# AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS], [TAR-NAME], [URL])
AC_INIT([hello], [0.0.1], [bug@xxx.com], [hello], [xxx.com])

# Force autoconf to be at least this version number.
AC_PREREQ([2.69])

# Put autotools auxiliary files in a subdir, so they don't clutter top dir.
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

# Enable "automake" to simplify creating makefiles. foreign relaxes some GNU
# checks. -Wall and -Werror are instructions to Automake, not GCC.
AM_INIT_AUTOMAKE([subdir-objects foreign -Wall -Werror])

# These are the files to be generated.
AC_CONFIG_FILES([Makefile])

# Safety check - list a source file that wouldn't be in other directories.
AC_CONFIG_SRCDIR([src/main.c])

# Put configuration results in this file for us to #include in our program.
AC_CONFIG_HEADERS([config.h])

# Check for a C compiler.
AC_PROG_CC

# Check for libraries, headers, data etc here.

# Last line: actually generate all required output files.
AC_OUTPUT