//let num= prompt("enter a num");
//if(num % 5 === 0) {
 //console.log(num,"is a multiple of 5");
//} else{
//console.log(num,"is not a multiple of 5");
//}
//let sum=0;
//let n;
//for(let i=1;i<=n;i++){
   // sum=sum+1;
//}
//console.log("sum=",sum);
//console.log("loop has ended");

//let student ={
 //name: "Pranya Patel",
 //age: 20,
 //cgpa: 8.2,
 //ispass: true,
//};
//for(let key in student){
   // console.log("key=" ,key ,"value=", student[key]);
//} 
 
//print nos
 //for (let num=0; num<=100; num++){
    //if(num%2===0){ //even for odd(num%2!===0)
    //console.log("num=",num); 
 //}
//}
  
// game
//let gameNum = 25;
//let userNum = prompt("Guess the game no. :");
 //console.log("userNum:",userNum); //just to print the no

//while(userNum != gameNum){ //game
   //userNum=prompt("you have guess the wrong no. please guess it again :");
//}
//console.log("Congo you have entered the right no.");

//strings

//template literals
//let specialString = `this is a template literal`;
//console.log("specialString");

//let str ="01234567";
//console.log (str.slice(1,5));

//arrays

//let marks_student1 = 97; //not the correct way for a large no.
//let marks_student2 = 87;
 //let marks = [22,33,56,79,98,89];
 //console.log(marks);

 //avg marks
// let marks =[ 59,87,92,47,67];
 //sum = 0;
 //for(let val of marks){
  // sum+=val;
 //}
 //let avg = sum/marks.length;
 //console.log(sum);

//array methods
//let companies=["Bloomerg","Google","Microsoft"," Uber","IBM","Netflix"];
//companies.shift();
//companies.splice(3,1,"Ola");
//companies.push(Amazon);

//functions
//function myfunction () {
  // console.log("Hello");
//}

//arrow functions 
//function sum(a,b) {
   //return a+b;
//}
//arrowsum= (a,b) => {
   //return a+b ;
//} 

//function countVowels(str){
  // let count=0;
   //for (const char of str){
      //if(char=="a"||char=="e"||char=="i"||char=="o"||char=="u"){
       //count++;
     // }
  // }
   //return count;
//}

//dom

//let h2=document.querySelector("h2");
//console.dir(h2.innerText);
 //h2.innerText = h2.innerText  +  "studing from apna cllg" ; 

 //let newBtn  = document.createElement("Button");
 //newBtn.innertext ="click me";
 //console.log(newBtn);

  //let div=document.querySelector("div");
//div.prepend(newBtn);

//let newHeading = document.createElement("h1");
//newHeading .innerHTML = "<i>Hii  idk bye</i>";

//document.querySelector("body").prepend(newHeading);

//let newBtn = document.createElement("button");
//newBtn.innerText = "click me!";
//newBtn.style.color = "white" ;
//nerBtn.style.backgroundcolor = "red";
//document.querySelector("body").prepend("newBtn");


//events
 

//let modeButton = document.querySelector("mode");
//let currMode ="light";

//modeButton.addEventListener("click",( )=>{ 
 // //console.log("You Are Trying To Chnage The Mode");

 //if(currMode === "light"){
   //currMode="dark";
   //document.querySelector("body").style.backgroundColor="black";
 //}
//else{
   //currMode ="light";
   //document.querySelector("body").style.backgroundColor="light";
// }

//console.log(currMode);
//}
//}


//objects and classes

//const student= {
  // fullName : "Pranya Patel",
   //cgpa :"8",
   //printMarks: function(){
     // console.log("marks= ",this.marks);
   //},
//};


//let DATA="secret info";
//class User{
   //constructor(name , email){
    //this.name=name;
    //this.email=email;
  // }
  // viewData(){
    //  console.log("data=", DATA);
  // }
//}

//class Admin extends User{
  // constructor(name,email){
     // super(name ,  email);
   //}
  // editData(){
     // DATA="some new value";
   //}
//}


//let student1=new User("riya","agjb@gamil.com");
//let student2=new User("yash","gduui@gmail.com");

//let teacher1=new User("reena","gsyik@gmail.com");

//let admin1=new Admin("admin","admin@gamil.com");

//synchronous and asynch.

//function hello(){
  // console.log("hello");
//}
// setTimeout(hello,2000)


 //function getData(dataid){
   //setTimeout(()=>{
      //console.log("data",dataid);
  // } ,2000);
// }

//callbackhell
//getData(1,() =>{
   //console.log("getting Data 2...");
  // getData(2,() =>{
     // console.log("getting Data 3...");
     // getData(3,() =>{
       //  console.log("getting Data 4...");
       //  getData(4);
      //});
  // });
//});


///async
//console.log("feching data1....");
//asyncFunc1(),then((res)=>{
   //console.log("feching data2....");
  // asyncFunc2().then((res)=>{});
//});

