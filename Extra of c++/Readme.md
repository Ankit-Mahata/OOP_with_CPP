⦁	time()
   
  time() function is available in <ctime> header file . it returns the seconds passed since jan 1, 1970. the return value changes every second. 
function syntax : time_t time(time_t *arg);
we should give 'NULL' or '0' to get return value i.e time(NULL)


⦁	rand()

   this function generates random numbers. but in every run it gives same sequence or same value.
   range of value it gives is from 0 to RAND_MAX . RAND_MAX is a predefined constant whose value is 32767.
 
for(int i=0; i<3; i++)              // output is : 41
                                                   18467
 {                                                 6334
    cout<<rand()<<endl;    
 }
every time the code runs it gives same sequence

 basically , random number generator (RNG) is pseudo-random
i.e it generate value from mathematical formula. the value that initiate the formula is called SEED. rand() gives very large number. 
if we want a range , let suppose 1-6 then we use mod(%) operator. for eg . rand() % 6 ; gives range from 0-5 so if we want to roll a dice 
we can simply ( rand() % 6 + 1 ) that gives the value from 1-6 


⦁	srand()

  srand() = seed random
this function sets starting point to RNG. in case if seed is not given then , rand() generate same sequence or same value every time the code runs.
for instance if we give seed as 2 i.e.
 srand(2);
 for(int i=0; i<3; i++)       // output is : 45
 {                                           29216
    cout<<rand()<<endl;                      24198
 }

here rand() gives different sequence than it gives when seed is not given as shown in  above example.
but every time this code runs it will generate same sequence because seed is fixed as 2 . 

so, we will give 'time(NULL)' as seed as it changes every time , so that rand() can generate different values/seque
