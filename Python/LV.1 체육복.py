def solution(n, lost, reserve):
    reserve_arr = set(reserve) - set(lost)
    lost_arr = set(lost) - set(reserve)
    # 중복 제거를 위해 reserve와 lost 각각 처리
    
    for i in reserve_arr:
        if i - 1 in lost_arr:
            lost_arr.remove(i - 1)
    # reserve에 해당하는 번호부터 돌면서 그 앞에 있는 사람이 체육복이 없을 경우 체육복을 넘겨주고 lost 처리
        
        elif i + 1 in lost_arr:
            lost_arr.remove(i + 1)
    # 아까와 반대로 그 뒤에 있는 사람이 체육복이 없을 경우 체육복을 넘겨주고 lost 처리
    
    return n - len(lost_arr)