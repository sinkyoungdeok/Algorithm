import hashlib
ha=hashlib.new('ripemd160')
ha.update(raw_input())
print ha.hexdigest()
