Non Recursive Make
=====================

a template for project that use Autoconf, Libtool and Make, but not Automake, in non-recursive make style.
philosophy from Peter Miller's "Recursive Make Considered Harmful" paper.

Quick Start Guide
========

* Add in your own modules. use `foo` module or the `tinyxml2` module as template.

* Edit `Makefile.in`:

    - Change `pkg_name := non_recursive_make` to refer to the name of
        your project.

    - Change the `modules :=` area to reflect the names of your
        modules.  For example, if you killed the `foo` module, kept
        the `tinyxml2` module, and added two more modules called bar
        and har, you would change this section to:

        <pre><code>modules := \
            tinyxml2	bar	har</code></pre>

    - Change the `testmodules :=` area to reflect the names of your
        unit test modules.  For example, if you used the `testfoo`
        module as a template to make a `testbar` module, you would
        change this section to:

        <pre><code>testmodules := \
            testbar</code></pre>

* Edit your `module.mk` files to list all of the files you want to be
    listed as dependencies, and all the files you want to be affected
    by the `make install` target. 

    For example, if you made a `baz` module with a config file at `baz/etc/bazqux.conf`, and the line in `baz/module.mk`
    would look like this:

    <pre><code>baz_etcs := $(stage_dir)/etc/bazqux.conf</code></pre>

    Note that your `module.mk` files will probably also need to
    include logic regarding linking, near the bottom. 

    Also note that `*.h` and `*.hpp` files that aren't going to be
    installed should *not* be mentioned in the `module.mk` files. 

* Rename all the directories named `one_true_makefile` to your
    project's name.

* Once your modules are set up, run `autoscan`, and replace
    `configure.ac`.

    put `config.h` in subdirectory called `include`:
    AC_CONFIG_SRCDIR([include/config.h.in])
    AC_CONFIG_HEADERS([include/config.h])

* Run `autoheader`

Reference
===============

https://github.com/ngbgithub/The-One-True-Makefile
