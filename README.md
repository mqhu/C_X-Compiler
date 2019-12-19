# CX Compiler
本项目为编译原理实践课堂作业项目，目的是使用Lex和Yacc实现一个简易类C风格编译器，包含以下几个部分：  
* CX语言的文法定义
* 编译器源文件
* 生成/使用方式
* 测试用例

## CX语言
CX语言是一种类C风格的语言，其词法、语法逻辑与C语言类似  
#### 词法定义：  
* 关键字：int bool if else while write read，所有的关键字都是保留字，并且必须是`小写`
* 专用符号：+ - * / < <= > >= == != = || && ！% ; ( ) { } /* */
* 其他标记：
  * 标识符：字母打头，后接字母或数字，识别出的标识符用ID标记，`区分大小写`字母
  * 无符号整数：由数字组成，用NUM标记  
    * \<ID>::=\<letter>|\<ID>\<letter>|\<ID>\<digit>  
    * \<NUM>::=\<digit>|\<NUM>\<digit>  
    * \<letter>::= a|b|...|z|A|B|...|Z  
    * \<digit>::=1|2|...|9|0  
* 空格由空白、换行符和制表符组成。空格分开ID、NUM关键字
* 注释用/*….*/括起，可以放在任何空白出现的位置，可以超过一行，注释`不能嵌套`
#### 语法和语义定义：
* \<program> ∷= \<block>
* \<block> ∷= {\<decls> \<stmts>}
* \<decls> ∷=\<decls> \<decl> | ε
* \<decl> ∷= int \<aid>; | bool \<bid>;
* \<aid> ∷= \<ID>
* \<bid> ∷= \<ID> //aid和bid可能要合并，通过其他途径来推出是否合法？
* \<stmts> ∷= \<stmts> \<stmt> | ε
* \<stmt> ∷= \<aid> = \<aexpr>; | \<bid> = \<bexpr>; | if (\<bexpr>) \<stmt>; |  if (\<bexpr>) \<stmt> else \<stmt>; | while (\<bexpr>) \<stmt>; | write \<aexpr>; | read \<aid>; |  \<block>
* \<aexpr> ∷= \<aterm> + \<aterm> | \<aterm> - \<aterm> | \<aterm>
* \<aterm> ∷= \<afactor> * \<afactor> | \<afactor> / \<afactor> | \<afactor>
* \<afactor> ∷= \<aid> | NUM | (\<aexpr>)
* \<bexpr> ∷= \<bexpr> || \<bterm> | \<bterm>
* \<bterm> ∷= \<bterm> && \<bfactor> | \<bfactor>
* \<bfactor> ∷= \<bid> | true | false | ! \<bfactor> | (\<bexpr>) | \<rel>
* \<rel> ∷= (\<aid>|NUM) (< | <= | > | >= | == | !=) \<aexpr>  
  
```注意：规则2)中的符号“{”” 、“}”为终结符号，不是元符号，规则8)、11)、14)中出现的符号“(”和“)”也是终结符号，不是元符号```  
  
#### 关于语义有几点说明：  
* 变量应该先声明后使用。变量声明如果和上一层{}中的变量重名，认作是最近的{}声明的变量处理
* If语句存在悬挂else二义性，使用“最近嵌套”非二义性规则解决：else部分作为当前if的一个子结构立即分析
* 符号/表示整数除，任何余数都被截去
* 除了上述功能，还实现了一维数组、求余、判断奇偶功能  
  
```注意：该语法其实存在二义性，实现时需修改```  
  
## 文件介绍
>mylex
>>mylex.l 词法分析文件  
  
>myyacc
>>myyacc.y 语法分析文件及头文件  
  
>testcodes CX语言编写的测试用例
>>factorial.txt 求阶乘  
>>lcm.txt 求最小公倍数  
>>prime.txt 求100以内质数  
  
## 生成/使用方法  
  
#### 工具：  
```gcc、flex以及bison```  
#### Step 1：  
```flex ./mylex/mylex.l```  
#### Step 2：  
```bison -d ./myyacc/myyacc.y```
#### Step 3：  
```gcc -o mytest lex.yy.c ./myyacc/myyacc.tab.c -I ./myyacc```  
得到`mytest.exe`执行文件  
  
## 使用测试用例  
```mytest.exe filename.txt```，filename替换成factorial或lcm或prime
