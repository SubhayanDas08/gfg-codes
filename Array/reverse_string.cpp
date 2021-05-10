string reverseWord(string str){
    
  std::string::reverse_iterator it;
  
  for(it=str.rbegin(); it!=str.rend(); it++)
    cout<<*it;
}