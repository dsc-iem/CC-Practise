## Attribute Parser

Problem Link: https://www.hackerrank.com/challenges/attribute-parser/problem

This challenge works with a custom-designed markup language HRML. 

In HRML, each element consists of a starting and ending tag, and there are attributes associated with each tag.

Only starting tags can have attributes. We can call an attribute by referencing the tag, followed by a tilde, '~' and the name of the attribute. 

The tags may also be nested.The opening tags follow the format:

<tag-name attribute1-name = "value1" attribute2-name = "value2" ...>

The attributes are referenced as:

tag1~value  

tag1.tag2~name

Given the source code in HRML format consisting of  lines, answer  queries. For each query, print the value of the attribute specified.

Print "Not Found!" if the attribute does not exist.
