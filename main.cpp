#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: vending machine
//  action 1: dispense soda
vendingMachine.dispenseSoda();


//  action 2: dispense water
vendingMachine.dispenseWater();

//  action 3: sound alarm
vendingMachine.soundAlarm();

//  2)
//  Noun: Rock Paper Scissors Player
//  action 1: player plays rock
player.playRock();
//  action 2: player plays scissors
player.playScissors();

//  action 3: player plays paper
player.playPaper(); 

//  3)
//  Noun: kickBoxer
//  action 1: kick
kickBoxer.kick();
//  action 2: box
kickBoxer.box();
//  action 3: hadouken
kickBoxer.hadouken();

//  4)
//  Noun: student
//  action 1: complete assignment
student.completeAssignment();
//  action 2: sleep
student.sleep();
//  action 3: procrastinate
student.procrastinate();

//  5) 
//  Noun: camel
//  action 1:  drink water
camel.drinkWater();
//  action 2: drink milk
camel.drinkMilk();
//  action 3: walk
camel.walk();

//  6) 
//  Noun: robber
//  action 1: threaten
robber.threaten();
//  action 2: run away
robber.runAway();
//  action 3: stab
robber.stab();

//  7)
//  Noun: fireman
//  action 1: spray water
fireman.spray();
//  action 2: call for backup
fireman.callForBackup();
//  action 3: run away
fireman.runAway();
 
//  8)
//  Noun: Koala
//  action 1: sleep
koala.sleep();
//  action 2: eat Eucalytpus Leaves
koala.eatLeaves();
//  action 3: climb 
koala.climb();

//  9)
//  Noun: businessman
//  action 1: sell
businessman.sell();
//  action 2: buy
businessman.buy();
//  action 3: fire
businessman.fire();

//  10)
//  Noun: employee
//  action 1: work
employee.work();
//  action 2: takebreak
employee.takeBreak();
//  action 3: quit
employee.quit();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
