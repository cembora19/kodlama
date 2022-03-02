from python.day17quizGame.question_model import Question
from data import question_data
from quiz_brain import QuizBrain
from day14HigherLower.art import logo

question_bank=[]
for question in question_data:
    question_text=question["text"]
    question_answer=question["answer"]
    new_question=Question(question_text, question_answer)
    question_bank.append(new_question)

quiz= QuizBrain(question_bank)
while quiz.still_has_questions():#if quiz still has questions remaining
    quiz.next_question()
if quiz.question_number==12:#aslinda burayi yazmana gerek yokta silmeye usendim
    print("You've completed the quiz.")
    print(f"Your final score was: {quiz.score}/{quiz.question_number}")