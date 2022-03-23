def solution(x):
    num = sum(map(int, str(x)))
    # map 함수를 이용하여 각 자리수를 더해준 값을 num에 대입
    
    if (x % num == 0):
        return True
    
    else:
        return False
    # 만약 원래의 수가 합의 수로 나눠지면 True, 아니면 False