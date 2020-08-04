# Split
Small c++ program to split a wordlist into a given number of pieces

Split is a small c++ program to divide a wordlist into pieces.
When you have compiled the source code (advice: use g++), you can deal with the interactive and simplest console.

WARNING: Not tested on .lst files yet. Works gorgeously on .txt files.

An example to compile and launch the program: (use the right output folder!)

1)  g++ -std=c++11 -o /home/kali/Desktop/splitter split.cpp

Don't forget the -std parameter: without it the program may not run.

2) Once compiled, launch the program with [position]/(outputname).
Launch examples:

  ./splitter
  /home/kali/Desktop/splitter

When the program's been launched, you can split your wordlist into as many pieces as you want, to make it run meanwhile on different computers or systems. This often optimizes the bruteforce attack.

Remember: the pieces are outputted in the same folder where you're running the script. Name's format is ["output"]+number.

Reassuming:

  1) Move the script in the folder you want it to work
  2) Compile the script with g++ (Don't forget -std=c++11)
  3) Launch the script with the -o parameter used in the g++ command (./splitter or /home/kali/Desktop/splitter, for example).
  4) Select the number of splits and the wordlist
  5) Enjoy your output files
  
This is my first post on GitHub. Hope it works and you like it, but I'd really appreciate if you could give me some advice to make it better.
Enjoy!
