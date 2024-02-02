string encode(string src)
{     
  //Your code here 
  string res = "";
  int count = 1;
  for(int i = 0; i< src.size(); i++){
      if(src[i] == src[i+1]){
          count++;
      }
      else{
          res = res + src[i];
          res = res + to_string(count);
          count = 1;
      }
  }
  return res;
}     
