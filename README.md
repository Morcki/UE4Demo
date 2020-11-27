# 项目概要:
## 2020/10/11 第一次作业要求:
+ 源码编译UE4，新建一个C++工程，进行简单场景编辑和工程设置 
+ 编译并形成安装包，确保能够用来将游戏工程安装到手机正常运行

> 构建的C++工程名：AndroidDemo

> apk及游戏运行视频[百度网盘地址](https://pan.baidu.com/s/1xP9xuEsBZzXEmlv6RqaB7g)，提取密码：mpt9

## 2020/10/18 第二次作业要求:
+ 靶标功能实现
+ 靶标击中得分机制
+ （附加功能，有余力）一定时间内多人打靶，中靶分数+时间加成得分，分数排行。（可以刷日志）

> 构建的C++工程名：mShootTarget

> 游戏运行视频[百度网盘地址](https://pan.baidu.com/s/1CWrOBQuU6XxNjUz10SMF5Q), 提取密码：jklb

## 2020/10/31 第三次作业要求:
+ 为目前的Demo添加类似下面的游戏界面：包含角色的个人信息， 基础操作按钮，计分显示。
+ （可选）添加一个得分排行榜，排行数据可使用SaveGame保存于本地，得分进入榜单时可编辑自己在榜单上显示的昵称。 

> C++工程名：mShootTarget

> apk及游戏运行视频[百度网盘地址](https://pan.baidu.com/s/14kafzK0r9gwcLSbEBbAV7w), 提取密码：2mg2

## 2020/11/7  第四次作业要求：
+ 实现基础的移动功能，包括站立Idle、跑、跳跃的动作表现
+ 实现角色的俯仰表现
+ 实现至少一种攻击或武器开火的表现，可以对接武器系统也可以是由按键触发的，要求在俯仰时依然可以表现正确，也就是角色可以在仰视的同时进行攻击或开火。
+ 实现一种动作表现，类似近战攻击或者投掷手雷，当角色站立不动时是一个全身的表现， 当角色移动时是一个.上半身的表现，即移动时腿部依然是走路的表现，站着不动时腿部可以有攻击的表现。
+ (选做)当按下AIt键时，可以实现自由视角功能，即角色不随着视角左右变化进行旋转，但是角色的头部可 以适当跟随视角左右、上下。

> C++工程名：mShootTarget

> 游戏运行视频[百度网盘地址](https://pan.baidu.com/s/1AedlR7LXyedgBBkUrqVNSg), 提取密码：vcth

## 2020/11/21  第五次作业要求：

+ 实现枪械的pick功能
+ 射线枪械：无物理弹道，直线命中，子弹命中到角色不同部位有不同的命中反馈音效
+ 抛体枪械：抛体命中角色后立刻产生爆炸，命中场景后产生速度衰减到若干后产生 爆炸，并区分物理材质，如金属，土壤等，会根据物理材质有不同的速度反馈，并且爆炸后可以把一定范围内的部分物件炸飞。

> C++工程名：mShootTarget

> 暂无