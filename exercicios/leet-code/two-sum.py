# problemas que eu vejo se a soma for diferente de target
# 1. qual dos dois números eu retiro para testar outra tupla?
# 2. eu retiro os dois números?
# 3. se eu retirar o número que não forma tupla, como eu posso fazer para recuperá-lo
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        data = []
        answer = []
        i = 0
        for number in nums:
            # numero possivel
            if number < nums:
                # numero igual ao target
                if number == target:
                    return answer.append(i)
                # numero menor que o target
                else:
                    current_tuple = (number, i) # numero mais o seu indice
                    data.append(current_tuple)
            # numero nao possivel
            else:
                continue
            i += 1  # indice adicionado
        # caso nao se encontre o numero
        for number in data:
            for another_number in data:
                if another_number != number[0]:
                    if (number[0] + another_number[0]) == target:
                        return answer.append(number[1], another_number[1])
                    else:
                        continue