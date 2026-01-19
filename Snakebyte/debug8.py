import copy

class Workstation:
    def __init__(self, specs):
        self.specs = specs

    def upgrade_ram(self, new_amount):
        self.specs['ram'] = new_amount

class Employee:
    def __init__(self,name,workstation):
        self.name = name
        self.workstation = workstation

standard_setup = {"cpu" : "i7",
                  "ram" : "16 GB",
                  "storage" : "512GB",
}
template_pc = Workstation(standard_setup)

alice = Employee("Alice", copy.deepcopy(template_pc))
bob = Employee("Bob", copy.deepcopy(template_pc))

alice.workstation.upgrade_ram("64GB")

print(f"Alice RAM : {alice.workstation.specs['ram']}")
print(f"Bob RAM : {bob.workstation.specs['ram']}")