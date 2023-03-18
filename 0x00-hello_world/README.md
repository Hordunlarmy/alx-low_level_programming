## RESOURCES

* [Everything you need to know to start with C.pdf](https://drive.google.com/file/d/1pa0nfo6ebh7bP6qyRVMIJd1mT-DuhPvi/view?usp=drivesdk)
* [Dennis Ritchie](https://en.m.wikipedia.org/wiki/Dennis_Ritchie)
* [“C” Programming Language: Brian Kernighan](https://youtu.be/de2Hsvxaf8M)
* [Why C Programming Is Awesome](https://youtu.be/smGalmxPVYc)
* [Learning to program in C part 1](https://youtu.be/rk2fK2IIiiQ)
* [Learning to program in C part 2](https://youtu.be/FwpP_MsZWnU)
* [Understanding C program Compilation Process](https://youtu.be/VDslRumKvRA)
* [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
* [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?t=2B0zz7EoVx-qTV4s09bfCQ&s=19)
* [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus)

**RECOMMENDED BEGINNER FRIENDLY READS**
* [Sams teach yourself C in 24 hours-Tony Zhang, John Southmayd (2000)](https://drive.google.com/file/d/1pfBgib7svXSe86ap3zsqAHFmoqcbjN1g/view?usp=drivesdk)
* [The C Programming Language (2nd Edition) by Brian W(K&R)](https://drive.google.com/file/d/1pbUkVUr0bKd1QU7xtEdo_NdtyfRdvr9n/view?usp=drivesdk)
* [Head First C - David Griffiths & Dawn Griffiths (2012)](https://drive.google.com/file/d/1pbQoTO8Xy745IAeekWjZm7bpaz8Dqd7Y/view?usp=drivesdk)


## SET UP BETTY LINTER

To run the Betty linter just with command betty <filename>:

* Go to the [Betty](https://github.com/holbertonschool/Betty) repository
* Clone the [repo](https://github.com/holbertonschool/Betty) to your local machine
* cd into the Betty directory
* Install the linter with sudo ./install.sh
* emacs or vi a new file called betty, and copy the script below:
```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
* Once saved, exit file and change permissions to apply to all users with chmod a+x betty
* Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin

You can now type betty <filename> to run the Betty linter!

##TASKS

* [Available On Request](https://drive.google.com/drive/folders/1p1You5htuiF2dKX-UhNSkC8R48f01RnQ)

