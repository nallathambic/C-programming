<?php 
$newar = "naveen";

//single line cmd///
printf("hello , my name is %s \n<br>",$newar);

//paranthesis is optional
print"hello my name is <br> ".$newar;
echo "<br>hello","hai" . $newar;
?>
hello mani
<?

$truevar = TRUE; //true,True,tRue all are correct
$falsevar = FALSE; // False,false , fAlse 

$stringvar = "TRUE";
print("truevar: ".$truevar . "<br>\n");
print("falsevar :". $falsevar . "<br>\n");

printf("$stringvar is of type ". gettype($stringvar). "\n<br>");

printf("%s is of type %s \n<br>",$stringvar, gettype($stringvar));
print('$stringvar is of type '. gettype($stringvar) . "\n<br>");
print('$falsevar is of type '. gettype($falsevar) . "\n<br>");

if("NULL ==0 and false == NULL and false == 0\n"){
    print("NULL ==0 and false == NULL and false == 0\n");
}

if(23 == (int)true){
    print("23 == true ? it is true \n" . (int)true);
} else{
    print("23 == int(true) ? it is false \n" . (int)true);
}

//integers
$int1 = 34; //postive num
$int2 = -34;//negative num
$int3 = 014; // octal num
$int4 = 0xff; // hexa decimal
$int5 = 0b110011110101001101;
print("$int3 <br>\n");
print("$int4 <br>\n");
print("$int5 <br>\n");

print($int5  + $int4 ."<br>\n");

//float 
$f1 = 2.1222;
printf("%.10f <br>\n",$f1);
$f2 = 2.230; //2.1 x10 ^3
printf("$f2 <br>\n");
unset($f2);
printf("$f2 <br>\n");


//arithemtics
$sum = 1 + 2;
$diff = 4 - 2;
$mult = 7 * 2;
$div = 6 / 2;


//shorthand arithmetics 

$num = 0;
$num = $num + 1;
print("$num <br>\n");
$num++;//c like syntax
print("$num <br>\n");
$num += 1; // python like synatx
print("$num <br>\n");

//multi line string
$doc = <<<'EOF'
My <br>
Name <br>
Is <br> $num
naveen; <br>
;<br>
;<br>
;<br>
;<br>
EOF;

$doc1 = <<<NAVEEN
My <br>
Name <br>
Is <br> $num
naveen; <br>
;<br>
;<br>
;<br>
;<br>
NAVEEN;


print($doc1);