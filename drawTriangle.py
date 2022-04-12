import turtle

triangle = turtle.Turtle()
triangle.penup()
triangle.goto(0,200)


f = open("TRIANGLE.txt", "r")

for line in f:
    writeLine = str(line)
    writeLine = writeLine.replace(" ", "\t")
    triangle.right(90)
    triangle.forward(50)
    triangle.right(90)
    triangle.forward(25)
    triangle.left(180)
    triangle.pendown()
    triangle.write(writeLine)
    triangle.penup()
    


# use turtle to draw triangle using the TRIANGLE.txt file

