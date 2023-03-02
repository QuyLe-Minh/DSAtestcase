# DSAtestcase
# Update
- (03/01/2022 10:00) I've already fixed bug in SQ command.
- (03/01/2022 17:15) I've already fixed bug in PQ command.
- (04/01/2022 20:45) Fixed more bugs in SQ command. 
- (04/01/2022 21:45) Fixed bugs in REGM command. Hope this time it works perfectly. Kindly redownload output folder and run again. Thanks!
# Introduction
The reason why I make this to support you and me to get 10 points at DSA assignment 1 <("). If you have any issues with my result, please contact me via www.fb.com/quyleemin and we will debug together :)).  
# Set up
## 1. Clone my repos
- Make a cloned of my repository using the following command in git bash: 
```sh
git clone https://github.com/QuyLe-Minh/DSAtestcase.git
```
- Then unzip all files in *input_and_output* and *src* to the same folder
## 2. main.cpp file
- Make a copy of your main file (restaurant.cpp) and the paste it to the same folder. For simplicity, please rename your copied file to **result.cpp** to make it synthesize with mine.
- In **main.cpp** file I've already made for you, include your copied file path. If you already rename to **result.cpp**, skip this step.
## 3. result.cpp file
- Except PS, PQ, SQ, there are no other *cout* in this file.
- In **simulate** funtion, change it to: 
```sh
void simulate(string filename, restaurant *r, int testcase)
```
- Then, add the following code in the beginning of the result.cpp file (right below "include"):
 ```sh
ofstream outfile; 
```
-Then declare it in the simulate function
 ```sh
outfile.open("got" + to_string(testcase) + ".txt"); //don't forget to close at the end of the function
```
- Replace all **cout** in result.cpp file to  **outfile**. For example, instead of *cout << "Empty\n;* change to *outfile << "Empty\n"*.
- Finally, run main.cpp to get all the "got.txt" file. If you already have it, skip this step.
# Compile
- ASan is a powerful tool to check memory leak of your program and tt works really well on Linux. You can read documentations of how to install it.
- (Optional) For checking memory leak, first change directory to your folder, then run the command below, in here I'm using clang compiler:
 ```sh
clang++ -fsanitize=address -g main.cpp -o main
./main
```
- Finally, run test.cpp file and debugging with me.

# Bottom line
This is only for reference purposes. I will not be responsible for any complaints regarding your grades.
