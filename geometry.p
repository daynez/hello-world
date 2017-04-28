#!/usr/bin/python

def area(w, h):
    return w*h;

x = 0;
y = 0;
A = 0;

x = int(raw_input("Input ractangle width "));

y = int(raw_input("Input ractangle height "));

A = area(x, y);

print ("Area = " + str(A));

