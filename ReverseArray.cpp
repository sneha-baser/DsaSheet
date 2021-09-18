//Time Complexity: O(n)
//Space Complexity: O(1)
string reverseWord(string str){
    
  //Your code here
  int l=str.length(),i,j;
  i=0;
  j=l-1;
  while(i<j){
      swap(str[i],str[j]);
      i++;
      j--;
  }
  return str;
}
