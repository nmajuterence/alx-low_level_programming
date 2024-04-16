#!/usr/bin/python3

"""Define and obj attribute function."""


def lookup(obj):
""" Returns: list: A list containing the 
attributes and methods of the object."""
    return (dir(obj))
