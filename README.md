DICH_boy

- I decided to implement the seagway, which can balance without any help and also can move forward, backward and rotate.

- First of all, i think about language, which i can use. A half of year earlier (on summer holiday) I tried to learn MATLAB and Simulink. And I found wonderful project, which is called Gyroboy. 
https://www.youtube.com/watch?v=wE-5eSu2ap0&index=1&list=PLmu_y3-DV2_na6mfOmMntrKzIn4DrnUlC

But when i watched it first time i didnt understand most of operation and moreover - all math fundamental. And I decided to save the link and return to it later, and thx to godness (or to u, Mike), but we can choose exactly homework. BUT i designed the robot by my own, so it different parameters and i need to find parameters by my own.

Some words about this project. Model based design is used, this approach provide possibility to create the project and most of operations checks on math model. Matlab can generate the code to EV3. To summarise it, first - math model of seagway was invented, controller was tuned using only math model, and only after this - code was generated and put in EV3.

I surprised that most of math was understandable. The most difficult one was space - state model and lqr (what is it, i'll explain later). So, i was excited and i began to do it using tutorial, but i read all links, and moreover - find the paper, where all kinematic scheme was invented.

So when video instructor said that he choose to use linear quadratic regulator (lqr) i was quite confused, because i didnt know what is it. Moreover i thought that pid regulator is  the best and most popular one. So i decided to dive in this problem. For more clear understanding math fundamentals i used this article. https://habrahabr.ru/post/277671/

In roughly speaking, this regulator tuned our system as PD controller, but helps to do it more accurate, because it is used all parameters of our output. So we need to know all states of our robot. Also i found some discussions on some forums, where most of inventors said, that this problem can be solved better using LQR instead of PID.

Of cause this project have some mistakes and problems, which i have to solve. It was problems with incorrect code and scheme.

Also i had some problems with hardware. The main one is 'drifting' gyroscope problem. It means that ur gyroscope increment an angle in 0 position. Also i have some difficulties with putting code on the robot. (MAtlab on linux platform cannot do it, so i needed to install matlab on godless Windows OS).

- So I think that my solution is quite good, because 
1) I increased my speed of robot and it can move without landing, 
2) LQR provide better result, according to sofa's warriors investigations.
3) I tried to land it, and it can hold position, in threshold between -30 + 30 degrees, and i think it's quite good result for lego.

- Link on video https://youtu.be/uLrkzMl7ViE

Thanks for this quite interesting home task. All hail Mike Ivanou.
