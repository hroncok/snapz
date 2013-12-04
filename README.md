snapz - Snaps STL files to zero Z coordinate
============================================

STL files sliced with Skeinforge are not snapped to zero Z coordinate automatically.
This could lead to various errors while printing and you have to be sure to snap the STL object to Z = 0.
While there are GUI tools that can do that, snapz aims for command line utility.

Compile
-------

To compile snapz, you'll need the [admesh library](https://github.com/hroncok/admesh), gcc and make. Then just type `make` to compile it.

Install
-------

You don't need to install snapz, you can invoke it from where it is with `./snapz`. However, to make things easier, it is recommended to put it somewhere in your `$PATH` (e.g. `/usr/local/bin`).

Run
---

To snap an STL file to Z = 0, run:

    snapz file.stl

If you want to keep the input and save the snapped STL to a different file, you can do it this way:

    snapz input.stl output.stl

If `output.stl` exists, it will be overwritten without questions, cause you know, what are you doing, right?

License
-------

This app and it's docs are released under the terms of WTFPL. That means you just do what the fuck you want to.
