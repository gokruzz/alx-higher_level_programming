#!/usr/bin/python3
if __name__ == "__main__":
from sys import argv
args = len(sys.argv) - 1
if args == 0:
print("{} 0 arguments.".format(args))
elif args == 1:
print("{} 1 argument:".format(args))
else:
print("{} arguments:".format(args))
for x in range(args):
print("{}: {:s}".format(x + 1, argv[x + 1]))
