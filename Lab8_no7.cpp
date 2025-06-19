#include<iostream>
#include<string>
using namespace std;
string digittoword(char digit){
   switch(digit){
   case '0': return "zero";
     case '1': return "one";
      case '2': return "two";
        case '3': return "three";
         case '4': return "four";
          case '5': return "five";
           case '6': return "six";
       case '7': return "seven";
    case '8': return "eight";
    case '9': return "nine";
   default: return "";
    }
}
string numbertowords(string number){
    string result="";
     for(char ch:number){
        result+=digittoword(ch)+" ";
    }
    return result;
}
int main(){
    string input;
     cin>>input;
      cout<<numbertowords(input)<<endl;
   return 0;
}
