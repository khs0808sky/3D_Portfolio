# DarkSouls
> **3D Game Portfolio**<br>

## Play Video Link
<링크>

## PlayRule & GameControl
- **게임규칙** <br>
보스몬스터를 공격하여 처치 시 클리어<br><br>
- **조작법** <br>
  
|키|조작|
|:---|:---|
|Mouse|시점 이동|
|W|전방으로 이동|
|A|좌측으로 이동|
|S|후방으로 이동|
|D|우측으로 이동|
|Space|점프|
|LShift|구르기|
|LCtrl|달리기|
|LMouseClick|공격하기|
|RMouseClick|적 쳐다보기(전투 중에 누르는 도중에만)|
|Q|물약 먹기(피가 닳았을 경우)|
|R|재시작하기(게임 클리어 시)|
|X|종료하기(게임 클리어 시)|

## Contents
- ### [MainScreen](#mainscreen)<br>
- ### [UI](#ui)<br>
- ### [Player](#player)<br>
- ### [Enemy](#enemy)<br>
- ### [PlayerAction](#playeraction)<br>

## MainScreen
> 비전투 시

![image](https://github.com/user-attachments/assets/60aa4885-f348-4c3d-8a05-170da548b91d)

> 전투 시

![image](https://github.com/user-attachments/assets/497a4f5a-80ff-4708-949d-d42f61eefc84)

## UI
- **플레이어 정보 Player Info**<br>
![image](https://github.com/user-attachments/assets/b66508b2-3ce3-4cd1-a607-87789a8ca309)

|색상|명칭|특성|예시|
|:---:|:---:|:---:|:---:|
|빨강|체력|적의 공격에 맞았을 때|![01_HP](https://github.com/user-attachments/assets/b549121d-6737-43f3-b5be-aa632e60cb38)|
|파랑|마나|내가 구르기(회피)를 사용하였을 때|![02_MANA](https://github.com/user-attachments/assets/ddbc28eb-d264-4b94-91e8-d6de7a85d50d)|
|초록|기력|내가 달릴 때|![03_ENERGY](https://github.com/user-attachments/assets/ae44ee9b-089c-4d5d-927e-b8d0dc1de464)|

- **적 정보 Enemy Info**<br>
> 적의 이름과 체력 표시<br>

![image](https://github.com/user-attachments/assets/ba3c859f-bfb9-4fab-95d0-27b8fe563a6b)

> 적이 데미지를 입었을 때 데미지 표시<br>

![image](https://github.com/user-attachments/assets/78a1925c-34f6-4e9f-aaf6-b1d741e15e5c)

- **아이템 Item**<br>
> Q를 누르면 물약을 먹음 (단, 피가 조금이라도 닳았을 경우에만)<br>
> 물약의 개수 표시<br>

![image](https://github.com/user-attachments/assets/85281796-5a2d-4f70-9b19-070000fb40f6)
![image](https://github.com/user-attachments/assets/37d003f6-3c11-439f-ac86-89bad91dd2ae)

- **락온 시스템 Lock On System**<br>
> 락온 비활성화 상태<br>

![image](https://github.com/user-attachments/assets/5fa06684-7f4c-4476-a1ce-88ac6e130d5c)

> 락온 활성화 상태<br>

![image](https://github.com/user-attachments/assets/abb9a3f9-1b2e-4d8b-8102-732a86b92e21)


- **게임 오버 You Died**<br>
![image](https://github.com/user-attachments/assets/1504622b-a9ad-4946-ab0e-7db4304db50b)


- **게임 클리어 Victory Achieved**<br>
![image](https://github.com/user-attachments/assets/bbb67761-dac2-4366-ae83-f153d624b5f0)


## Player
![04_Greystone](https://github.com/user-attachments/assets/145211e2-e93b-4fd2-81e7-194a6d0d52cc)

## Enemy
![05_Khaimera](https://github.com/user-attachments/assets/6757c457-c56f-4f26-ae91-ca0eb6dfd434)

## PlayerAction
- **공격 Attack**<br>

