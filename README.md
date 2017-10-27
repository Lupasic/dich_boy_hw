DICH_boy

- I decided to implement the seagway, which can balance without any help and also can move forward, backward and rotate.

- First of all, I thought about language, which I can use. A half of year earlier (on summer holiday) I tried to learn MATLAB and Simulink. And I found wonderful project, which is called Gyroboy. 
https://www.youtube.com/watch?v=wE-5eSu2ap0&index=1&list=PLmu_y3-DV2_na6mfOmMntrKzIn4DrnUlC

When I watched it first time I didn't understand most of operations and moreover - math fundamental. And I decided to save the link and return to it later, and thx to godness (or to u, Mike), it happens. BUT I designed the robot by my own, so it has different parameters and I tune parameters by my own.

Some words about this project. Model based design is used, this approach provides possibility to check most of operations on math model. Matlab can generate the code to EV3. To summarise it, first - math model of seagway need to be invented, after this controller need to be tuned using only math model, and only after this - code is generated and put in EV3.

I surprised that most of math was understandable nowaday. The most difficult one was space - state model and lqr (what is it, i'll explain later). So, I was excited and I began to do it using tutorial, but I read all links, and moreover - find the paper, where all kinematic scheme was invented.

So when video instructor said that he choose to use linear quadratic regulator (lqr) I was quite confused, because I didn't know what is it. Moreover I thought that pid regulator is the best and most popular one. So I decided to dive into this problem. For more clear understanding math fundamentals, I used this article. https://habrahabr.ru/post/277671/

In roughly speaking, this regulator tuned our system as PD controller, but can do it more accurate, because it is based on the math model. But we need to know all states of our robot. Also I found some discussions on several forums, where most of inventors said, that this problem can be solved better using LQR instead of PID.

Of cause this project (gyroboy) have some mistakes and problems, which I had to solve. There are problems with incorrect code and scheme.

Also I had some problems with hardware. The main one is 'drifting' gyroscope problem. It means that your gyroscope increment an angle in 0 position. Also I have some difficulties with putting code on the robot. (Matlab on linux platform cannot do it, so I have to install matlab on godless Windows OS).

- So I think that my solution is quite good, because 
1) I increased my speed of robot and it can move without landing, 
2) LQR provide better result, according to sofa's warriors investigations.
3) I tried to land it, and it can hold position, in threshold between -30 + 30 degrees, and i think it's quite good result for lego.

- Link on video https://youtu.be/uLrkzMl7ViE

Thanks for this quite interesting home task. All hail Mike Ivanou.
