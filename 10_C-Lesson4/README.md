# 10_C-Lesson4(C编程-第四课时)

- 2020/12/20

## content

### 操作符

- C语言中的操作符。

- 算术运算符

下表显示了 C 语言支持的所有算术运算符。假设变量 A 的值为 10，变量 B 的值为 20，则：

|运算符|描述                          |实例            |
|---  |---                           |---             |
|+    |把两个操作数相加               |A + B 将得到 30  |
|-    |从第一个操作数中减去第二个操作数 | A - B 将得到 -10|
|*    |把两个操作数相乘               |A * B 将得到 200  |
|/    |分子除以分母                   |B / A 将得到 2   |
|%    |取模运算符，整除后的余数        |B % A 将得到 0   |
|++   |自增运算符，整数值增加 1        |A++ 将得到 11    |
|--   |自减运算符，整数值减少 1        |A-- 将得到 9     |

- 关系运算符

下表显示了 C 语言支持的所有关系运算符。假设变量 A 的值为 10，变量 B 的值为 20，则：

|运算符|描述                                                   |实例          |
|---  |---                                                     |---           |
|==   |检查两个操作数的值是否相等，如果相等则条件为真。            |(A == B) 为假。|
|!=   |检查两个操作数的值是否相等，如果不相等则条件为真。          |(A != B) 为真。|
|>    |检查左操作数的值是否大于右操作数的值，如果是则条件为真。     |(A > B) 为假。 |
|<    |检查左操作数的值是否小于右操作数的值，如果是则条件为真。     |(A < B) 为真。 |
|>=   |检查左操作数的值是否大于或等于右操作数的值，如果是则条件为真。|(A >= B) 为假。|
|<=   |检查左操作数的值是否小于或等于右操作数的值，如果是则条件为真。|(A <= B) 为真。|

- 逻辑运算符

下表显示了 C 语言支持的所有关系逻辑运算符。假设变量 A 的值为 1，变量 B 的值为 0，则：

<table class="reference notranslate">
<tr><th style="width:10%">运算符</th><th style="width:55%;">描述</th><th>实例</th></tr>
<tr><td>&amp;&amp;</td><td>称为逻辑与运算符。如果两个操作数都非零，则条件为真。</td><td> (A &amp;&amp; B) 为假。</td></tr>
<tr><td>||</td><td>称为逻辑或运算符。如果两个操作数中有任意一个非零，则条件为真。</td><td> (A || B) 为真。</td></tr>
<tr><td>!</td><td>称为逻辑非运算符。用来逆转操作数的逻辑状态。如果条件为真则逻辑非运算符将使其为假。</td><td> !(A &amp;&amp; B) 为真。</td></tr>
</table>

- 位运算符

位运算符作用于位，并逐位执行操作。&、 | 和 ^ 的真值表如下所示：

<table class="reference notranslate">
<tr><th style="width:20%">p</th><th style="width:20%">q</th><th style="width:20%">p &amp; q</th><th style="width:20%">p | q</th><th style="width:20%">p ^ q</th></tr>
<tr><td>0</td><td>0</td><td>0</td><td>0</td><td>0</td></tr>
<tr><td>0</td><td>1</td><td>0</td><td>1</td><td>1</td></tr>
<tr><td>1</td><td>1</td><td>1</td><td>1</td><td>0</td></tr>
<tr><td>1</td><td>0</td><td>0</td><td>1</td><td>1</td></tr>
</table>

下表显示了 C 语言支持的位运算符。假设变量 A 的值为 60，变量 B 的值为 13，则：

<table class="reference notranslate">
<tr><th style="width:10%">运算符</th><th style="width:55%;">描述</th><th>实例</th></tr>
<tr><td>&amp;</td><td><p>按位与操作，按二进制位进行"与"运算。运算规则：</p>
<pre>0&amp;0=0;   
0&amp;1=0;    
1&amp;0=0;     
1&amp;1=1;</pre></td><td> (A &amp; B) 将得到 12，即为 0000 1100</td></tr>
<tr><td>|</td><td><p>按位或运算符，按二进制位进行"或"运算。运算规则：</p>
<pre>0|0=0;   
0|1=1;   
1|0=1;    
1|1=1;</pre>
</td><td> (A | B) 将得到 61，即为 0011 1101</td></tr>
<tr><td>^</td><td><p>异或运算符，按二进制位进行"异或"运算。运算规则：</p>
<pre>0^0=0;   
0^1=1;   
1^0=1;  
1^1=0;</pre>

</td><td> (A ^ B) 将得到 49，即为 0011 0001</td></tr>
<tr><td>~</td><td><p>取反运算符，按二进制位进行"取反"运算。运算规则：</p>
<pre>~1=0;   
~0=1;</pre></td><td> (~A ) 将得到 -61，即为 1100 0011，一个有符号二进制数的补码形式。</td></tr>
<tr><td>&lt;&lt;</td><td>二进制左移运算符。将一个运算对象的各二进制位全部左移若干位（左边的二进制位丢弃，右边补0）。</td><td> A &lt;&lt; 2 将得到 240，即为 1111 0000</td></tr>
<tr><td>&gt;&gt;</td><td>二进制右移运算符。将一个数的各二进制位全部右移若干位，正数左补0，负数左补1，右边丢弃。</td><td> A &gt;&gt; 2 将得到 15，即为 0000 1111</td></tr>
</table>

- 赋值运算符

下表列出了 C 语言支持的赋值运算符：

<table class="reference notranslate">
<tr><th style="width:10%">运算符</th><th style="width:55%;">描述</th><th>实例</th></tr>
<tr><td>=</td><td>简单的赋值运算符，把右边操作数的值赋给左边操作数</td><td> C = A + B 将把 A + B 的值赋给 C</td></tr>
<tr><td>+=</td><td>加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数</td><td> C += A 相当于 C = C + A</td></tr>
<tr><td>-=</td><td>减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数</td><td> C -= A 相当于 C = C - A</td></tr>
<tr><td>*=</td><td>乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数</td><td> C *= A 相当于 C = C * A</td></tr>
<tr><td>/=</td><td>除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数</td><td> C /= A 相当于 C = C / A</td></tr>
<tr><td>%=</td><td>求模且赋值运算符，求两个操作数的模赋值给左边操作数</td><td> C %= A 相当于 C = C % A</td></tr>
<tr><td>&lt;&lt;=</td><td>左移且赋值运算符</td><td> C &lt;&lt;= 2 等同于  C = C &lt;&lt; 2</td></tr>
<tr><td>&gt;&gt;=</td><td>右移且赋值运算符</td><td> C &gt;&gt;= 2 等同于  C = C &gt;&gt; 2</td></tr>
<tr><td>&amp;=</td><td>按位与且赋值运算符</td><td> C &amp;= 2 等同于  C = C &amp; 2</td></tr>
<tr><td>^=</td><td>按位异或且赋值运算符</td><td> C ^= 2 等同于  C = C ^ 2</td></tr>
<tr><td>|=</td><td>按位或且赋值运算符</td><td> C |= 2 等同于  C = C | 2</td></tr>
</table>

- 杂项运算符

下表列出了 C 语言支持的其他一些重要的运算符，包括 sizeof 和 ? :。

<table class="reference">
<tr><th style="width:10%">运算符</th><th style="width:55%;">描述</th><th>实例</th></tr>
<tr>
<td>sizeof()</td><td>返回变量的大小。</td><td>sizeof(a) 将返回 4，其中 a 是整数。</td>
</tr>
<tr>
<td>&amp;</td><td>返回变量的地址。</td><td>&amp;a; 将给出变量的实际地址。</td>
</tr>
<tr>
<td>*</td><td>指向一个变量。</td><td>*a; 将指向一个变量。</td>
</tr>
<tr>
<td>? :</td><td>条件表达式</td><td>如果条件为真 ? 则值为 X : 否则值为 Y</td>
</tr>
</table>

### 判断

- 利用C语言解一般形式的一元二次方程。并利用`if  else`判断解的情况。

```c
//code
if(condition1)
{
    dothing1();
}
else
{
    dothing2();
}
//code
```

- [>>>judgment.c](src/judgment.c)
