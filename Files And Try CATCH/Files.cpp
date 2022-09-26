/*

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile1("filename.txt");

  ofstream myNewFile("sidd.txt");

  // Write to the file
  MyFile1 << "Files can be tricky, but it is fun enough!";
  myNewFile<<" sidd is Good Student";
  MyFile1 << "Changes The Text but not Change only Append";
  // Close the file
  MyFile1.close();
  myNewFile.close();
  return 0;
}  */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  // Create a text file
  ofstream FileOfSid("Sid.txt");
  ofstream dj("box.txt");

  // Write to the file
  FileOfSid << "I am Very Good Boy";
  dj<<" Dum dumd dumd dum";
 
  // Close the file
  FileOfSid.close();
  dj.close();

  // Create a text string, which is used to output the text file
  string myText,djText;

  // Read from the text file
  ifstream MyReadFile("Sid.txt");
  ifstream djOutput("box.txt");

  // Use a while loop together with the getline() function to read the file line by line
  while (getline (MyReadFile, myText)) {
    // Output the text from the file
    cout << myText;
  }

  while (getline (djOutput, djText)) {
    // Output the text from the file
    cout << djText;
  }

  // Close the file
  MyReadFile.close();
}
