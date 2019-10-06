Loading data into Snowflake is a two-step process:

1. ```PUT``` file to a place where Snowflake can access the file: known as ```file Staging```;
2. ```COPY```: load the file from stage into table.

#### 30 million+ lines of  fake prices, don't open via Excel.
#### Because if you do, Excel will automatically truncate into 100w+ lines, which is the max available number in excel.
