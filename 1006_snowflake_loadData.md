Loading data into Snowflake is a two-step process:

1. ```PUT``` file to a place where Snowflake can access the file: known as ```file Staging```;
SnowSQL: (```csvfiles``` is the name for the internal stage)

```PUT file:///tmp/load/contacts0*.csv @csvfiles;```


This is for sample SQL. More staging SQL details [here](https://docs.snowflake.net/manuals/sql-reference/sql/put.html)

2. ```COPY```: load the file from stage into table.
SnowSQL:

```
COPY
INTO contacts
FROM @csvfiles
PATTERN = '.*contacts0[1-4].csv.gz'
ON_ERROR = 'skip_file';
```

#### 30 million+ lines of  fake prices, don't open via Excel.
#### Because if you do, Excel will automatically truncate into 100w+ lines, which is the max available number in excel.
