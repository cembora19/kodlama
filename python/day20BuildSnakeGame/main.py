import secrets
from tracemalloc import start, stop
from turtle import Turtle, Screen, forward, tracer
import time
from snake import Snake

screen=Screen()
screen.setup(width=600, height=600)
screen.bgcolor("black")
screen.title("Welcome to My Snake Game")
screen.tracer(0)

snake=Snake()

screen.listen()
screen.onkey(snake.up, "w")
screen.onkey(snake.down, "s")
screen.onkey(snake.left, "a")
screen.onkey(snake.right, "d")

game_is_on=True
while game_is_on:
    screen.update()
    time.sleep(0.1)
    snake.move()
    #detect collision with food
    if snake.head.distance(food)<15:
        food.refresh()
        scoreboard.increase_score()

screen.exitonclick()