def solution(nums):
    arr = set(nums)
    # 배열 중복 제거
    if (len(nums) / 2) >= len(arr):
        return len(arr)
    else:
        return len(nums) / 2
    # 배열의 크기보다 종류가 작다면 그대로 출력, 아니라면 배열의 크기 출력
    # 파이썬 min함수가 익숙하지 않아 코드가 복잡해짐