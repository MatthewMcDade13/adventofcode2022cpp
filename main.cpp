
#include <iostream>
#include <fstream>
#include <string>

// This exercise will require you to use 'if statements', 'arrays/lists', and 'for-loops'.
// if you can solve this, you can program anything. Good luck, you got this. Google is your friend.
// I can answer any questions you have, don't be afraid to ask anything. And feel free to talk it
// out with me, it will help you understand how to create a solution easier.

// Reads the calories.txt file and puts it into a string and returns it.
std::string read_file() {
   FILE* f = fopen("calories.txt", "r");

   // Determine file size
   fseek(f, 0, SEEK_END);
   size_t size = ftell(f);

   char* file_bytes = new char[size];

   rewind(f);
   fread(file_bytes, sizeof(char), size, f);

   std::string str(file_bytes);

   delete[] file_bytes;

   return str;
}

// Challenge link: https://adventofcode.com/2022/day/1
int main() {
  std::string calories = read_file();

  // HINT :: you can get each number in the calories string by splitting it by \n (newline character.)
  // keep in mind how each "elf" is stored in the string. We want to find a way to store the total calories each
  // elf is carrying, and then find the largest number among that sum.
  // assign the answer to the below variable called elf_largest_calories below. 
  // *************** BEGIN WRITE CODE HERE ******************* 
  



  // replace 0 with your answer.
  int elf_largest_calories = 0; 


  std::cout << "largest calories is: " << elf_largest_calories << std::endl;


}



