import argparse
import sys

def calc(args):
    if args.c=="add":
        return args.a +args.b
    if args.c=="mul":
        return args.a *args.b
    if args.c=="div":
        return args.a /args.b
    if args.c=="minus":
        return args.a -args.b
    else:
        return"something went wrong"

myobj=argparse.ArgumentParser()
myobj.add_argument("--a",type=float,default=2.0,help="i am X")
myobj.add_argument("--b",type=float,default=3.0,help="i am Y")
myobj.add_argument("--c",type=str,default="add",help="i am operation")

args=myobj.parse_args()
sys.stdout.write(str(calc(args)))
