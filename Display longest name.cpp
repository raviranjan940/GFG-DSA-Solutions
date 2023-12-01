// Given a list of names, display the longest name.

// Example:

// Input:
// N = 5
// names[] = { "Geek", "Geeks", "Geeksfor",
//   "GeeksforGeek", "GeeksforGeeks" }

// Output:
// GeeksforGeeks

string len = "";
for(int i=0; i<n; i++){
  if(names[i].length() > len.length()) len = names[i];
}
return len;
