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
- ### [MonsterAction](#monsteraction)<br>
- ### [MonsterPatternInfo](#monsterpatterninfo)<br>

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
> 체력 : 500<br>

![04_Greystone](https://github.com/user-attachments/assets/145211e2-e93b-4fd2-81e7-194a6d0d52cc)

## Enemy
> 체력 : 1000<br>

![05_Khaimera](https://github.com/user-attachments/assets/6757c457-c56f-4f26-ae91-ca0eb6dfd434)

## PlayerAction
> **리스폰 Respawn**<br>

![06_GreystoneRespawn](https://github.com/user-attachments/assets/de87f1d3-adb6-4a99-b66a-e92621ddf5c6)

> **걷기 Walk**<br>

![07_GreystoneWalk](https://github.com/user-attachments/assets/cc1c383a-40b8-453d-83e2-85b4dbbabdb4)

> **달리기 Run**<br>

![08_GreystoneRun](https://github.com/user-attachments/assets/114ece6c-8674-4c6e-9c64-05432824a01e)

> **점프 Jump**<br>

![09_GreystoneJump](https://github.com/user-attachments/assets/ab351c08-720a-494d-a7d4-eca7e9236aac)

> **공격 Attack**<br>

|N번째 공격|타수|데미지|공격모션|
|:---:|:---:|:---:|:---:|
|1번째|1|34|![10_GreystoneFirstAttack](https://github.com/user-attachments/assets/b6e77258-a8f1-4004-aa66-609042b05439)| 
|2번째|1|46|![11_GreystoneSecondAttack](https://github.com/user-attachments/assets/657d2a7e-2951-47eb-98c0-a2329ff01414)|
|3번째|1|58|![12_GreystoneThirdAttack](https://github.com/user-attachments/assets/7173b837-5641-4f60-ac0e-f25d469b619e)|
|총합|3|138|![13_GreystoneFullAttack](https://github.com/user-attachments/assets/2e7fc6e0-d75e-4ad5-b1ae-562e005510fc)|

> **구르기 Roll**<br>

![14_GreystoneRoll](https://github.com/user-attachments/assets/5f17a286-fe26-4aca-a9e7-0cf69e91fb12)

> **포션먹기 Heal**<br>

![15_GreystoneHeal](https://github.com/user-attachments/assets/4d2c1322-7c55-42a6-9326-b694d8957d15)

> **쓰러짐 Dead**<br>

![16_GreystoneDead](https://github.com/user-attachments/assets/c6a0d5ea-9167-4c5b-921e-a7e1626008f4)

## MonsterAction
> **대기 Idle**<br>

![17_MonsterIdle](https://github.com/user-attachments/assets/e0173a84-093f-4417-8c0a-5844fd67e0df)

> **추적 Walk**<br>

![18_MonsterChase](https://github.com/user-attachments/assets/f2bf2206-9789-4886-9d4d-55b7d95ee7c0)

> **일반공격 GeneralAttack**<br>

|N번째 공격|타수|데미지|공격모션|
|:---:|:---:|:---:|:---:|
|1번째|1|50|![19_MonsterFirstAttack](https://github.com/user-attachments/assets/f417ae3a-b8ae-4ced-b5f9-f2aed0f675d1)|
|2번째|1|60|![20_MonsterSecondAttack](https://github.com/user-attachments/assets/12abedf3-1a76-48fb-bf2c-c25971e4d5e1)|
|3번째|1|75|![21_MonsterThirdAttack](https://github.com/user-attachments/assets/e0202efc-2ae0-4d19-80f4-0c3bbe8293d5)|
|총합|3|185|![22_MonsterFullAttack](https://github.com/user-attachments/assets/0b0966d4-223f-4aa3-a11c-6032dedb98ca)|

> **진화 Evolution**<br>

![23_MonsterEvolution](https://github.com/user-attachments/assets/3d66859a-ffd6-411f-9e38-b654fdb59776)

> **강화공격 IntensifiedAttack**<br>

|N번째 공격|타수|데미지|공격모션|
|:---:|:---:|:---:|:---:|
|1번째|1|100|![24_MonsterFirstHardAttack](https://github.com/user-attachments/assets/19563fce-a22e-478a-a9e8-165bdae417e8)|
|2번째|1|100|![25_MonsterSecondHardAttack](https://github.com/user-attachments/assets/e0919497-5a70-46a8-a3ea-cc2913847a3c)|
|3번째|1|100|![26_MonsterThirdHardAttack](https://github.com/user-attachments/assets/0de60e59-d15c-4118-a305-db7ab344db31)|
|4번째|2|75|![27_MonsterFourthHardAttack](https://github.com/user-attachments/assets/37f72a20-4bb8-40e4-8cb2-f8e4af7427ca)|
|총합|5|450|![28_MonsterFullHardAttack](https://github.com/user-attachments/assets/2acb1aac-ac75-4a0f-a79b-106fc82e7dd6)|

> **쓰러짐 Dead**<br>

![29_MonsterDead](https://github.com/user-attachments/assets/48a333a7-1cf5-452f-88f2-20078edf68d2)

## MonsterPatternInfo
- 플레이어가 일정 거리에 들어오기전엔 대기 상태를 유지
- 플레이어가 일정 거리에 들어올 시 플레이어를 추적함
- 플레이어를 추적 중 공격사거리 안에 플레이어가 들어올 시 일반공격함
- 몬스터의 피가 50%이하가 될 시 몬스터가 진화함, 이 진화모션중엔 몬스터가 무적상태가 됨
- 다시 플레이어를 추적 중 공격사거리 안에 플레이어가 들어오면 강화공격(첫 번째)를 함
- 첫 번째 공격을 한 뒤, 이후 공격(2, 3, 4번째)들은플레이어의 좌측, 우측중에 랜덤으로 순간이동하여 공격함
- 만약 좌측, 우측 모두 이동불가능한 구역이라면 전방 혹은 후방으로 순간이동하여 공격함
- 몬스터의 피가 0%이하가 되면 몬스터가 죽는 모션을 함
