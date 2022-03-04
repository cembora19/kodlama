import random
from turtle import *#screen turtle
tim=Turtle()
screen=Screen()
tim.shape("turtle")
tim.color("medium purple")
tim.speed(4)

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