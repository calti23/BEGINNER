// OOP Example (Test Application) 
using System;

namespace ConsoleApp{ 
    class Program{ 
        static void Main(string[] args){ 

            var question1 = new Question(){
                QuestionText = "Which one is not a programming language?",
                Options = new string[4]{"Python" , "C#" , "JavaScript" , "CSS"},
                Answer = "CSS"
            };
            var question2 = new Question(){
                QuestionText = "Which one is the most popular programming language?",
                Options = new string[4]{"Kotlin" , "C++" , "Java" , "PHP"},
                Answer = "PHP"
            };
            var question3 = new Question(){
                QuestionText = "Which one is not a web programming platform?",
                Options = new string[4]{"Django" , "Asp.net" , "Spring" , "Unity"},
                Answer = "Unity"
            };

            var questions = new Question[]{question1 , question2 , question3};

            foreach (var question in questions){

                Console.WriteLine(question.QuestionText);

                foreach (var option in question.Options){
                    Console.WriteLine(option);
                }

                Console.Write("Your Answer : ");
                var answer = Console.ReadLine();
                if (question.AnswerController(answer)){
                    Console.WriteLine("CONGRATS!!!");
                }
                else{
                    Console.WriteLine("YOU WENT WRONG!!!");
                }
                Console.WriteLine("------------------------------");
            }
        } 
    } 

    class Question{ 
        public string QuestionText { get; set; } 
        public string[] Options { get; set; } 
        public string Answer { get; set; }
        public bool AnswerController(string answer){
            return this.Answer.ToLower == answer;
        }
    } 
}
