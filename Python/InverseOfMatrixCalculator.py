##This is really Great Programme to Calculate Inverse of a Matrix along with the Steps taken To reverse the Matrix.

# -*- coding: utf-8 -*-
"""
Created on Fri Mar 12 14:55:24 2021

@author: Nikhil Singh
"""

# Finding the inverse of a matrix

while(True):
    def finding_inverse():
        from fractions import Fraction
        n = int(input("Enter the order of the matrix: "))
        print()
        # formation of the main list
        given_matrix = []
        print("Enter the elements of a row giving space: ")
        print("For example for row1 of 3X3 matrix type: 1 2 3 ")
        print()
        # to get the  matrix
        for y in range(n):
            while(True):
                print(f"For row{y+1}: ")
                x = list(map(int, input().split()))
                given_matrix.append(x)
                if len(x)==n:
                    break
                else:
                    print(f"You have to enter {n} numbers.")
                    continue

        # to get the diagonal matrix
        diagonal_matrix = []
        for i in range(n):
            temp_lst = []
            for j in range(n):
                if i == j:
                    temp_lst.append(1)
                else:
                    temp_lst.append(0)
            diagonal_matrix.append(temp_lst)



        # a function to print the matrix
        def print_matrix():
            for u in range(n):
                for v in range(n):
                    given_matrix[u][v] = str(given_matrix[u][v])
                    print(format(given_matrix[u][v], "<6"), end="")
                    given_matrix[u][v] = Fraction(given_matrix[u][v])
                print(format("|", "<6"), end="")
                for z in range(n):
                    diagonal_matrix[u][z] = str(diagonal_matrix[u][z])
                    print(format(diagonal_matrix[u][z], "<8"), end="")
                    diagonal_matrix[u][z] = Fraction(diagonal_matrix[u][z])
                print()
            print("-"*17,"*","-"*18)
            print()
        print()
        print_matrix()
        # making the matrix lower triangular
        for x in range(n-1):
            for i in range(x, n-1):
                if given_matrix[x][x] == 0:
                    print(" "*13,f"R{x+1} <---> R{x+2}")
                    given_matrix[x], given_matrix[x + 1] =  given_matrix[x + 1] ,given_matrix[x]
                    diagonal_matrix[x], diagonal_matrix[x + 1] =  diagonal_matrix[x + 1] ,diagonal_matrix[x]
                    print_matrix()
                l = given_matrix[i+1][x]/given_matrix[x][x]
                l = Fraction(l).limit_denominator()
                if l!=0:
                    print(" "*13,f"R{i+2} ---> R{i+2} - ({l})R{x+1}")
                for k in range(n):
                    given_matrix[i+1][k] -= l*given_matrix[x][k]
                    diagonal_matrix[i+1][k] -= l*diagonal_matrix[x][k]
                    given_matrix[i+1][k] = Fraction(given_matrix[i+1][k]).limit_denominator()
                    diagonal_matrix[i+1][k] = Fraction(diagonal_matrix[i+1][k]).limit_denominator()
                if l!=0:
                   print_matrix()


        for i in given_matrix[0]:
            i = Fraction(i)
        for i in diagonal_matrix[0]:
            i = Fraction(i)

        # making the matrix identity
        for x in range(n-1,0,-1):
            for i in range(x-1, -1, -1):

                l = given_matrix[i][x]/given_matrix[x][x]
                l = Fraction(l).limit_denominator()

                if l!=0:
                    print(" "*13,f"R{i+1} ---> R{i+1} - ({l})R{x+1}")
                for k in range(n):
                    given_matrix[i][k] -= l*given_matrix[x][k]
                    diagonal_matrix[i][k] -= l*diagonal_matrix[x][k]
                    given_matrix[i][k] = Fraction(given_matrix[i][k]).limit_denominator()
                    diagonal_matrix[i][k] = Fraction(diagonal_matrix[i][k]).limit_denominator()
                if l!=0:
                   print_matrix()

        # making diagonal elements of given matrix to 1
        for i in range(n):
            if given_matrix[i][i] != 1:
                print(" " * 13, f"R{i + 1} ---> R{i + 1}/{given_matrix[i][i]}")
                for j in range(n):
                    diagonal_matrix[i][j] = diagonal_matrix[i][j] / given_matrix[i][i]
                given_matrix[i][i] = 1
                print_matrix()

        print("Hence the inverse of the following matrix is following: ")
        print()
        for u in range(n):
            print(" "*6,"|   ", end="")
            for v in range(n):
                diagonal_matrix[u][v] = str(diagonal_matrix[u][v])
                print(format(diagonal_matrix[u][v], "<6"), end="")
                diagonal_matrix[u][v] = Fraction(diagonal_matrix[u][v])
            print("|",end="")
            print()
