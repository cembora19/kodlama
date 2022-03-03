import csv
from turtle import *
from numpy import imag #screen turtle
tim=Turtle()
screen=Screen()
tim.shape("turtle")
tim.color("medium purple")
tim.speed(4)
# for _ in range(4):
#     tim.forward(100)
#     tim.right(90)
# tim.left(90)
# tim.forward(10)
# tim.right(90)
# for _ in range(20):
#     tim.forward(10)
#     tim.penup()
#     tim.forward(10)
#     tim.pendown()
angle=360
polygon=3
exterior_angle=0
while exterior_angle!=36:
    exterior_angle=angle/polygon
    for i in range(polygon):
        tim.forward(100)
        tim.right(exterior_angle)
    polygon+=1
    
screen.exitonclick()