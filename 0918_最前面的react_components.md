#### work flow: 自定义的Dashboard.js(标注```export Dashboard```) -> App.js -> index.js -> index.html
[branch12](https://github.com/AgileIntelligence/AgileIntPPMTool/tree/branch12)

创建了2个独立的js文件: 
- 第一个: ```Project```包下面的```ProjectItem.js```: 在全局文件```App.js```中只有```Dashboard.js```一个文件, 字如其名, 这个```Dashboard.js```就是整个页面上面的
dashboard, 在整个dashboard上面的其他的components都应该放在dashboard上面, 所以实际上应该wrap在```Dashboard.js```文件中, 
- i.e. 整个flow是 ```ProjectItem.js```写好之后, ```<ProjectItem />```放在```Dashboard.js```中, 然后```Dashboard.js```放在```App.js```中;
- 第二个: ```Layout```包下面的```Header.js```: 这个是登陆用户之后在旁边能看到的 Navigation sideBar. 这个是跟后面要用的 Redux 相关的, 因为Navigation bar之后要根据当前用户是不是登陆状态显示不同的东西, i.e. 如果是登陆状态下要显示logout, 如果不是登陆状态 Nav Bar应该显示不同的东西,  **实际上是记录用户当前的状态**, 所以要用Redux; 
- 总结一下: 在```App.js```中： 只能有一个父级元素, 最简单的方式是```<div> </div>```包起来; ```<div> </div>```中```<Header />```元素和```<Dashboard />```元素是同级的, ```<Dashboard />```包含了很多```<ProjectItem />```元素

整个文件目录结构: 
```
src-----------
 |
 |-- components
 |      |
 |      |----- Layout
 |      |       |
 |      |        ----- Header.js
 |      |----- Project
 |      |       |
 |      |        ----- ProjectItem.js
 |      |
 |       ----- Dashboard.js
  -- App.css
  -- App.js
  ...
  -- index.js
  ...
        
```
[branch13](https://github.com/AgileIntelligence/AgileIntPPMTool/tree/branch13)








