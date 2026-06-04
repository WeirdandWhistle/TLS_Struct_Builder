# TLS_Struct_Builder
Take c structs and create pack, unpack, free, and length functions during the build phase.
This project is super easy to use and customize. just go into the python dict called table(pack/unpack/length) and modify till you get what you want. It wont work automatically for things like Extensions but that's fine, those are really complicated anyway. The only piece of code written by AI is `.SECONDARY: $(cFiles)` so I am not going to count it.
# Why?
The main point of this project is to setup a good build system for a future TLS 1.3 stack.

# How to use
Just `git clone` the repo and use `make` | `make build` | `make clean`. If you have any questions you can email me. 